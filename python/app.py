import tkinter as tk

# Khởi tạo biến tiền và số lượng nước ban đầu
money = 0
quantity = 0

# Khởi tạo danh sách sản phẩm và giá tiền tương ứng
products = {
    "Nước suối": 10,
    "Nước khoáng": 15,
    "Nước ép": 20
}

# Hàm nhập tiền
def insert_money():
    global money
    inserted_money = int(entry_money.get())
    money += inserted_money
    label_money.config(text=f"Số tiền hiện tại: {money} VND")
    entry_money.delete(0, 'end')

# Hàm nhập số lượng
def insert_quantity():
    global quantity
    quantity = int(entry_quantity.get())
    entry_quantity.delete(0, 'end')

# Hàm chọn sản phẩm
def select_product():
    global money, quantity
    product = listbox_products.get(tk.ACTIVE)
    if product in products:
        price = products[product]
        total_cost = price * quantity
        if total_cost <= money:
            money -= total_cost
            label_money.config(text=f"Số tiền còn lại: {money} VND")
            label_result.config(text=f"Đã mua {quantity} {product}")
        else:
            label_result.config(text="Số tiền không đủ.")
    else:
        label_result.config(text="Sản phẩm không tồn tại.")

# Hàm trả lại tiền thừa
def return_change():
    global money
    label_result.config(text=f"Trả lại tiền: {money} VND")
    money = 0
    label_money.config(text=f"Số tiền hiện tại: {money} VND")

# Tạo cửa sổ giao diện
window = tk.Tk()
window.title("Máy Bán Nước Tự Động")

# Tạo các thành phần giao diện
label_money = tk.Label(window, text=f"Số tiền hiện tại: {money} VND")
label_money.pack()

entry_money = tk.Entry(window)
entry_money.pack()

entry_quantity = tk.Entry(window)
entry_quantity.pack()

button_insert_money = tk.Button(window, text="Nhập tiền", command=insert_money)
button_insert_money.pack()

button_insert_quantity = tk.Button(window, text="Nhập số lượng", command=insert_quantity)
button_insert_quantity.pack()

listbox_products = tk.Listbox(window)
for product in products:
    listbox_products.insert(tk.END, product)
listbox_products.pack()

button_select_product = tk.Button(window, text="Chọn sản phẩm", command=select_product)
button_select_product.pack()

button_return_change = tk.Button(window, text="Trả lại tiền thừa", command=return_change)
button_return_change.pack()

label_result = tk.Label(window, text="")
label_result.pack()

# Khởi chạy giao diện
window.mainloop()
