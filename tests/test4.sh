echo "Running test4..."
echo

output1=$(echo -e "universe" | ./tests/a.out)

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output1" == "i" ] ; then
  echo "Pass: i = $output1"
else
  echo "Expected i but got: $output1"
  exit 1
fi

output2=$(echo -e "to" | ./tests/a.out)

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output2" == "Too short" ] ; then
  echo "Pass: Output = $output2"
else
  echo "Expected Too short but got: $output2"
  exit 1
fi

echo
echo "Test4 passed."

exit 0
