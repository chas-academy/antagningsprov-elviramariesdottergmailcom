echo "Running test6..."
echo

output=$(echo -e "5 10 55 15 25" | ./tests/a.out)


if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "25" ] ; then
  echo "Pass: 25 = $output"
else
  echo "Expected 25 but got: $output"
  exit 1
fi


echo
echo "Test6 passed."

exit 0

