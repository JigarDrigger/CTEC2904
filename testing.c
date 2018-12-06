int main()
{
	a, b, c, d = map(int, input().split())
myNumbers = [1, 2, 3, 4, 5]
minimum = 1
maximum = 5

for number in myNumbers:
    if not (minimum and maximum):
        minimum, maximum = number, number
    elif number < minimum:
        minimum = number
    elif number > maximum:
        maximum = number

print("Maximum number is {}".format(maximum))
print("Minimum number is {}".format(minimum))
}