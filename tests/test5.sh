echo "Running test5..."
echo

output=$(echo -e "13" | ./tests/a.out)

# Read the values into an array
readarray -t values <<< "$output"

# Assign each value to a variable
val1=${values[0]}
val2=${values[1]}
val3=${values[2]}
val4=${values[3]}
val5=${values[4]}
val6=${values[5]}
val7=${values[6]}
val8=${values[7]}
val9=${values[8]}
val10=${values[9]}

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$val1" == "13" ] ; then
  echo "Pass: 13 = $val1"
else
  echo "Expected 13 but got: $val1"
  exit 1
fi

if [ "$val2" == "26" ] ; then
  echo "Pass: 26 = $val2°F"
else
  echo "Expected 26 but got: $val2"
  exit 1
fi

if [ "$val3" == "39" ] ; then
  echo "Pass: 39 = $val2"
else
  echo "Expected 39 but got: $val2"
  exit 1
fi

if [ "$val4" == "52" ] ; then
  echo "Pass: 52 = $val2"
else
  echo "Expected 52 but got: $val2"
  exit 1
fi

if [ "$val5" == "65" ] ; then
  echo "Pass: 65 = $val2"
else
  echo "Expected 65 but got: $val2"
  exit 1
fi
if [ "$val6" == "78" ] ; then
  echo "Pass: 78 = $val2"
else
  echo "Expected 78 but got: $val2"
  exit 1
fi
if [ "$val7" == "91" ] ; then
  echo "Pass: 91 = $val2"
else
  echo "Expected 91 but got: $val2"
  exit 1
fi
if [ "$val8" == "104" ] ; then
  echo "Pass: 104 = $val2"
else
  echo "Expected 104 but got: $val2"
  exit 1
fi
if [ "$val9" == "117" ] ; then
  echo "Pass: 117 = $val2"
else
  echo "Expected 117 but got: $val2"
  exit 1
fi
if [ "$val10" == "130" ] ; then
  echo "Pass: 130 = $val2"
else
  echo "Expected 130 but got: $val2"
  exit 1
fi


echo
echo "Test5 passed."

exit 0
