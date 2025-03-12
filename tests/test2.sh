echo "Running test2..."
echo

output=$(echo -e "10 5 325" | ./tests/a.out)

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "325" ] ; then
  echo "Pass: 325 = $output"
else
  echo "Expected 325 but got: $output"
  exit 1
fi

echo
echo "Test2 passed."

exit 0
