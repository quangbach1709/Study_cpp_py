# import decimal

# n = int(input("N = "))

# power = decimal.Decimal(2) ** n

# sum = 0
# for digit in str(power):
#     sum += int(digit)

# n = int(input("N = "))

# power = [1]

# for _ in range(n):
#     carry = 0
#     for i in range(len(power)):
#         product = power[i] * 2 + carry
#         power[i] = product % 10
#         carry = product // 10

#     while carry:
#         power.append(carry % 10)
#         carry //= 10

# result = sum(power)

# print("Tong =", result)
