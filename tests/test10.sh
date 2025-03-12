echo "Running test10..."
echo

output=$(echo -e "ananas" | ./tests/a.out)


if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "aaanns" ] ; then
  echo "Pass: ananas -> $output"
else
  echo "Expected aaanns but got: $output"
  exit 1
fi


echo
echo "Test10 passed."

exit 0

