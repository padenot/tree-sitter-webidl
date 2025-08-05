#!/bin/sh

EXPECTED_FAILURES=""

echo "=== Testing parsing ==="
parse_failures=0
total_files=0

for file in testcases/*
do
  total_files=$((total_files + 1))
  tree-sitter parse $file > /dev/null
  if [ $? -ne 0 ]
  then
      echo "$file didn't parse"
      parse_failures=$((parse_failures + 1))
  fi
done

echo "Parse results: $((total_files - parse_failures))/$total_files files parsed successfully"

echo ""
echo "=== Testing highlighting ==="
highlight_failures=0

for file in testcases/*
do
  tree-sitter query 'queries/highlights.scm' $file > /dev/null 2>&1
  if [ $? -ne 0 ]
  then
      echo "$file highlighting failed"
      highlight_failures=$((highlight_failures + 1))
  fi
done

echo "Highlight results: $((total_files - highlight_failures))/$total_files files highlighted successfully"

if [ $parse_failures -eq 0 ] && [ $highlight_failures -eq 0 ]
then
  echo ""
  echo "All tests passed!"
else
  echo ""
  echo "Some tests failed - $parse_failures parse failures, $highlight_failures highlight failures"
fi
