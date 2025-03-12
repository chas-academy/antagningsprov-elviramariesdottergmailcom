echo "Running test8..."
echo

output=$(echo -e "OthisIStheSTRYNG" | ./tests/a.out)


if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "5" ] ; then
  echo "Pass: 5 = $output"
else
  echo "Expected 5 but got: $output"
  exit 1
fi


echo
echo "Test8 passed."

exit 0

