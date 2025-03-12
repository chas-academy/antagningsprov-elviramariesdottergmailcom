echo "Running test1..."
echo

output=$(echo -e "10 10" | ./tests/a.out)

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "20" ] ; then
  echo "Pass: 20 = $output"
else
  echo "Expected 20 but got: $output"
  exit 1
fi

echo
echo "Test1 passed."

exit 0
