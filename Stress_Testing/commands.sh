#dos2unix my_script.sh for making it unix

set -e
g++ code.cpp -o code
g++ TCgen.cpp -o TCgen
g++ brute.cpp -o brute
for((i = 1; ; ++i));do
    ./TCgen $i > input_file
    ./code < input_file > myAnswer
    ./brute < input_file > correctAnswer
    diff -Z myAnswer correctAnswer > /dev/null || break
    echo "Passed test: "  $i
done
echo "WA on the following test:"
cat input_file
echo "Your answer is:"
cat myAnswer
echo "Correct answer is:"
cat correctAnswer

