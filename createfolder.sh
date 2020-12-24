#!/bin/bash


# Get Folder Name
foldername=$1
array=(Himanshu Suraj Arvind)

str=$'#inlude<iostream>\nusing namespace std;\n\nint main(){\n\n\n return 0;\n\n}'

if [[ -z "$foldername" ]]; then
  echo "Pass Folder Name as argument"
  exit
fi


echo "[#]Creating Folder $foldername"
mkdir $foldername


for i in "${array[@]}"; do

mkdir $foldername/$i
touch $foldername/$i/main.cpp
echo "$str" >> $foldername/$i/main.cpp

done

echo "[#] Folder Created with $foldername"



#mkdir $foldername/Suraj
#mkdir $foldername/Arvind


