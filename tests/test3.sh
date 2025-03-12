echo "Running test3..."
echo

output=$(echo -e "instructions" | ./tests/a.out)

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "12" ] ; then
  echo "Pass: 12 = $output"
else
  echo "Expected 12 but got: $output"
  exit 1
fi

echo
echo "Test3 passed."

exit 0
