echo "Running test9..."
echo

output=$(echo -e "345 456" | ./tests/a.out)


if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "801" ] ; then
  echo "Pass: 345 + 456 = $output"
else
  echo "Expected 801 but got: $output"
  exit 1
fi


echo
echo "Test9 passed."

exit 0

