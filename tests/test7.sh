echo "Running test7..."
echo

output=$(echo -e "98.5 1.82" | ./tests/a.out)


if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "29.74" ] ; then
  echo "Pass: 29.74 = $output"
else
  echo "Expected 29.74 but got: $output"
  exit 1
fi


echo
echo "Test7 passed."

exit 0

