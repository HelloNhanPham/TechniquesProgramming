-------------------------------------------------------------------------------------

Cho hai dãy số nguyên đã được sắp xếp không giảm a và b lần lượt có n và m phần tử. Hãy ghép chúng thành dãy c được bố trí theo thứ tự không giảm.
Giới hạn: n,m≤10^5 và 0≤a[i],b[i]≤10^9.

-------------------------------------------------------------------------------------

Dựa vào những phân tích ta có giải pháp sử dụng hai con trỏ như sau:

- Dãy a có con trỏ i , con trỏ này bắt đầu ở vị trí đầu dãy a. Con trỏ i này được thể hiện như phần tử nhỏ nhất chưa được chọn trong dãy a. 
- Dãy b có con trỏ j, con trỏ này bắt đầu ở vị trí đầu dãy b Con trỏ j này được thể hiện như phần tử nhỏ nhất chưa được chọn trong dãy b .
- Ta sẽ lặp lại công việc này, cho đến khi đưa hết các phần tử trong dãy a và b vào dãy c:
- Khi các phần tử trong một dãy nào đó, dãy a hoặc dãy b, đều đã được đưa vào dãy c: đưa lần lượt các phần tử trong dãy còn lại vào dãy c.
- Ngược lại:
    + So sánh hai phần tử ở hai con trỏ. Đưa phần tử có giá trị nhỏ hơn vào dãy c, nếu hai phần tử có giá trị như nhau thì chọn một trong hai.
    + Tăng vị trí con trỏ ở phần tử được đưa vào lên một đơn vị.

-------------------------------------------------------------------------------------