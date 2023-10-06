word_sequence = input("Nhập dãy các từ: ")

# Tạo một danh sách để lưu các cặp (chữ cái, số lần xuất hiện)
char_count_list = []

for word in word_sequence:
    for char in word:
        if char.isalpha():
            char = char.lower()  # Chuyển chữ cái thành chữ thường để đếm
            found = False
            for pair in char_count_list:
                if pair[0] == char:
                    pair[1] += 1
                    found = True
                    break
            if not found:
                char_count_list.append([char, 1])

# In ra kết quả thống kê
for pair in char_count_list:
    print(f"Chữ '{pair[0]}' xuất hiện {pair[1]} lần")
