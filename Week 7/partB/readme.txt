câu 1:
output:
	*p3 = B, p3 = 0x5678
	*p3 = A, p3 = 0x1234
	*p1 = B, p1 = 0x1234
câu 2:
	*p = 5;
câu 3: 
	Lỗi ở đây xuất phát từ việc gán một con trỏ kiểu double (double*) 	cho một biến kiểu char (char). Điều này là không hợp lý vì hai kiểu 	dữ liệu này khác nhau về kích thước bộ nhớ mà chúng chiếm giữ và 	cách biểu diễn dữ liệu.
