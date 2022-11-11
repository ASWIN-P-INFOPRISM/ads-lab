num = int(input("Enter a number : "))

sum = num + (num*10+num) + ((num*10+num)*10+num)

str_num = str(num)

print(f"{str_num}+{str_num+str_num}+{str_num+str_num+str_num} = {sum}")
