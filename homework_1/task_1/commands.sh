#1. Count how many lines are there in “data.dat”.
wc -l < data.dat # --> -l print the newlines count

#2. Count how many lines of those contain “dolor” or “dalor”?
grep -c d[ao]lor data.dat 

#3. Count how many words are there in “data.dat”?
wc -w < data.dat

#4. Count how many of those start with “mol”?
grep -c -o "\bmol\w*" data.dat # -o print only the matched parts of a line
