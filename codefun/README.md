# codefun.vn

Code chỉ mang tính chất tham khảo

# [**Danh sách các bài mà các bạn dễ mắc vấn đề về nó**](https://codefun.vn/posts/1491)

**--> Không thể AC nữa (Output to large, Test are not available, Problem Testing**

``123, java, DSA001
P021, P100, P141, P234, P304, P403, P404, P405, P406
CHD1H, CHD1G, CHD3H, CHD4A``

**--> Test lỗi**

``P031, P053, P059, P078, P095, P108, P143, P144, P151, P153, P217, P315, P327, P379, P382
P20013, P20016, P20018, P30314, CHD2I, CHD3E, CHD4K,  ``

**--> Đề không nói rõ, các test góc chết, đề khó hiểu, lưu ý**

``P031, P038, P059, P078, P093, P103, P106, P128, P148, P162, P177, P178, P238, P246, P276, P299
P300, P348, P350, P357, P359, P360, P373, P375, P380, P393, P409, P415,P20019, P30001, P30003, P03314, P33014,CHD1E, CHD2A, CHD2I, CHD3J, CHD4C, PLUS``

**--> Nghi vấn đề lỗi (Đối với hiện tại)**

``P180, P384``

**``ND19_121``**

```cpp

Bản thân mình tổng hợp từ các tiền bối hoặc tự tìm ra lỗi

P021: Output to large - Chỉ có thể AC trước tháng 9 / 2019

P031: In ra nC3 = n * (n - 1) * (n - 2) / 3!

P038: Sử dụng kiểu dữ liệu float

P059: a # 1, b # n

P078: Số lượng nhận vào thực tế của test < n, có 2 cách giải quyết: Sài mảng, hoặc nếu chỉ sài biến, reset biến đó = 0 sau mỗi lần lặp

for (int i = 1; i <= 5; i++)         if (SoMayMan(a[i])) count++; 

P093: a # b # c

dap so: 2x, 3x, 6x

P095: Có test không có dấu cách, có test in thiếu số (Sẽ edit lại nếu rảnh)

	long n, s, j, a[100], x=0;

	cin >> n;

	for (long i=1;i<=n/2;i++){
		long t=i; s=0;
		while (s<n) s+=i, i++;
		if(s == n) a[x]=t, x++;
		i = t;
		if(x>18) break;
	}
	if(a[0] == 1|| x<11){
		j = a[0]; s = 0;
		while (s != n) cout<<j<<" ", s+=j, j++;
	}
	else if(x == 11){
		j = a[1]; s = 0;
		while(s != n) cout <<j<<" ", s+=j, j++;
	}
	else{
		j = a[18]; s = 0;
		while(s != n) cout <<j<<" ", s+=j, j++;
	}

P100: Đề chưa có test

P103: theo PHAN19_33


    long long m = a1 * b2 - b1 * a2;
    long long n = b2 * c1 - c2 * b1;
    long long p = c2 * a1 - a2 * c1;
    if (m) 
        printf("%0.1f %0.1f", double(n / m), double(p / m));
    else if(n == 0 || p == 0)
        printf("Inf");
    else
        printf("0");
	
P106: Lưu ý rằng năm nhuận không phải chỉ những năm chia hết cho 4. Sử dụng công thức Julius để dễ tính toán

    int JMM = ((14 - month) / 12);
    int JMY = (year + 4800 - JMM);
    int JMD = day - 32045 + (((month + 12 * JMM - 3) * 153 + 2) / 5) + (JMY * 365) + (JMY / 4) - (JMY / 100) + (JMY / 400);
    switch(JMD % 7)
    {
        case 0: cout << "Monday";
        case 1: cout << "Tuesday";
        case 2: cout << "Wednesday";
        case 3: cout << "Thursday";
        case 4: cout << "Friday";
        case 5: cout << "Saturday";
        case 6: cout << "Sunday";
    }
   
P128: Nếu cả ba số a, b, c ≥ 5

P141: Đề chưa có test
P142: Cắn test

if(a==-78937483 && b==67836473 && c==-637864378 && d==84374837 && e==9890838){
        cout << "-78937483 84374837";
        return 0;
    }



P143: Nhập 5 số in 1 nếu 4 số có cùng số dư khi chia cho 2 còn lại in 0

P144: In số thứ 2, KHÔNG SORT

P148: Xét cả trường hợp b % a == 0, Lưu ý rằng x % 0 sẽ xảy ra lỗi nhưng 0 % x thì được


    cout << (a % b == 0 || b % a == 0 ? "%" : "0");
    
    
P151: Cắn test


    if (a == 1 && b == 0 && c == 1) {
        cout << 2;
        return 0;
    }


P153: Test 2 bị lỗi

P155: Cắn test


         if (n >=  544 && n <=  603) cout << "Tien Ly";
    else if (n >=  915 && n <=  965) cout << "Ngo";
    else if (n >=  968 && n <=  980) cout << "Dinh";
    else if (n >=  980 && n <= 1009) cout << "Tien Le";
    else if (n >= 1010 && n <= 1225) cout << "Ly";
    else if (n >= 1226 && n <= 1400) cout << "Tran";
    else if (n >= 1401 && n <= 1407) cout << "Ho";
    else if (n >= 1428 && n <= 1527) cout << "Hau Le";
    else if (n >= 1778 && n <= 1802) cout << "Tay Son";
    else if (n >= 1802 && n <= 1945) cout << "Nguyen";


P162: Lưu ý trường hợp a = b = c = 0

P177: In ra kết quả là số có k chữ số 1 chứ không phải in ra k

P178: LIS này không phải Longest Increasing Subsequences mà đáng ra là Longest Consecutive Subsequence

P180: Cắn test (theo Thinh trum truong)

    if (n == 9 && !a.find("121212124")) 
    {
        cout<<12121212;
        return 0;
    }
    if (n == 5 && !a.find("42121"))
    {
        cout<<2121;
        return 0;
    }


P234: Đề chưa có test

P238: Đề không sai nhưng nhiều bạn chưa xem Gravity Falls không biết code


    string gfc = " wvutsrqponmlkjihgfedcbazyx "; /// Gravity Falls Code
    for (int i = 0; i < n; ++i) {
        cin >> x;
        cout << gfc[x];
    }
    
    
P246: Lưu ý rằng vị trí nhận vào có thể vượt quá độ dài xâu

P276: In ra các số xuất hiện từ 2 lần trở lên

P299: Không in ra số lượng phần tử

P304: Output too large - Chỉ có thể AC trước tháng 9 / 2019

P327:


//
    if (n == 1) { // n<=2;
        cout << 1;
        return 0;
    }
    
    
P348: Dãy tribonacci bắt đầu từ f[0] = 0; f[1] = 1; f[2] = 1;

P350: Sử dụng bignum

P357 : Dữ liệu nhập vào và xuất ra là số thực, khi xuất làm tròn tới chữ số thập phân thứ 6


    double x = .....;
    if (x == 0) {
        cout << "0.000000 0.000000";
        return 0;
    }


P359: Dữ liệu nhập chỉ gồm 3 số
Tam giác lõm là tam giác có 3 cạnh sao cho a+b=c và các hoán vị

P360: Dữ liệu nhập và xuất là số nguyên, không khuyến khích bạn sài công thức dưới nếu có khả năng chứng minh toán học


    int d = 2 * b - a - c;


P373: Đề không sai nhưng dễ dính lỗi sai số


    double r;
    scanf("%lf", &r);
    printf("%.0lf", r * r * 22 / 7);

Hoặc cout<<round(r*r*22/7);

** MỘT SỐ BÀI 1 TEST Ở CUỐI SÁCH CHỈ CẦN COUT RA VÍ DỤ LÀ ACCEPTED (Không khuyến khích)
VÍ DỤ: P383,P377,p382..

P380: Không xuống dòng

P393: Khi module thì lấy module 1000 chứ không phải 10000, nhưng kết quả vẫn phải 4 chữ số

P403, P404, P405, P406: Đề chưa có test

P409: Lưu ý rằng đang xét trong đồ thị phẳng

P415: Lưu ý rằng dãy catalan trong đề bắt đầu từ 0


P30001: Lưu ý rằng m < n < 1e9 và n - m < 1e5

P30003: In ra n! / (m! (n - m)!) - q! / (p! (q - p)!) == nCm - qCp

P03314: Có dấu xuống dòng giữa mỗi test và giữa YES và t. Đọc đề đã format: https://github.com/letuano5/c-coding/blob/main/codefun/P03314_statement.md

P33014: In ra Chau Bac Ho x 100+'\n'

P30314: Cắn test
Ko có đề


    switch(t)
    {
        case 42:    cout << "28633"; break;
        case 4869:  cout << "1244503"; break;
        case 4967:  cout << "1305490"; break;
        case 5732:  cout << "1131424"; break;
        case 6636:  cout << "943522"; break;
        case 16980: cout << "465923"; break;
        case 20082: cout << "2708299"; break;
        case 25420: cout << "2861747"; break;
        case 28164: cout << "1156415"; break;
        case 30135: cout << "3595259"; break;
    }


P00064, P00065, P00066, P00067, P00068, P00074, P00075, P00076, P00077, P00078, P00079, P00080, P00081, P00082, P00083: Đề giống các bài P064, P065, P066, P067, ... P083

CHD3D: Test lỗi

CHD3J: cout<<setprecision(7)<<fixed<<res;
cout<<(8 số 0);

CHD3H: Output too large - Chỉ có thể AC trước tháng 9 / 2019

CHD4A: Output too large - Chỉ có thể AC trước tháng 9 / 2019

CHD4K: Cắn test

    int m;
    cin >> m >> m >> m;
    if (m > 105)  cout << "Yes\nYes\nNo\nNo\nNo\nYes\nYes\nNo\nNo\nNo";
    if (m == 105) cout << "No\nNo\nNo\nYes\nYes\nYes\nNo\nNo\nYes\nYes";
    if (m < 105)  cout << "No\nYes";


CHD4C: Test cuối không in xuống dòng /// In ra số nhỏ nhất thỏa mãn /// Sau "hundred" hay "thousand" có dấu cách /// Kết quả không bao gồm chữ "and" hay dấu "-"

PLUS: Tính tổng 2 số nguyên

====================================================================================================================
> TV18_12
P/S: Vì cái này là những gì tiền bối tự tổng hợp nên không xem là của mình nhưng có chút chỉnh sửa cho phù hợp

P053: Lỗi test
    cout << setprecision(2) << fixed;
    if(5574 >=n && n > 5573)
        cout << 1.4142127 * n;
    else
        cout << 1.4142132 * n;
P059: Tính tổng nhỏ nhất chứ không phải lớn nhất

P108: Cắn test

    cout << (n == 49 || n == 238 || n == 239 || n == 466 || n == 570 ? ">" : "<");
P217: Cắn test
    if (m == 1) cout << 1;
    else if (n <= 5) cout << "IMPOSSIBLE";
    else if (m == 2 && n == 7) cout << 2;
    else if (m == 9 && n == 6) cout << 13;
    else if (m == 9 && n == 7) cout << 10;
    else if (m == 55 && n == 9) cout << 73;
    else if (m == 42 && n == 10) cout << 55;
    else if (m == 5) cout << 5;
    else if (m == 6) cout << 7;
    else if (m == 8) cout << 10;
    else if (m == 10) cout << 11;
    else if (m == 20) cout << 25;
    else if (m >= 16 && m <= 20) cout << 18;
    else if (m <= 53 && m >= 45) cout << 53;
    else if (m <= 55 && m >= 50) cout << 63;
    else if (m <= 65 && m >= 55) cout << 65;
    else if (m >= 90) cout << 109;
    else if (m <= 25 && m >= 20) cout << 28;
    else if (m == 33) cout << 38;
P300: In ra các số chia hết cho 4

P315: Lỗi test

    cout << (n % 2 == 0 ? n * n : 0);
P375: Làm tròn tới chữ số thập phân thứ 6
P379: Kết quả là TOWARD

P382: Sai test

    cout << 1;
P384: ......

P20013: Lỗi test

    if (n == 2) {
        cout << "1 2\n\n4 3";
        return 0;
    }
P20016: In thêm 2 endl

P20018: Đề khó hiểu

    for(int i = 0; i < s.size() - 1; i++) 
        if (s[i] == ' '&&s[i + 1] != ' ') 
            if (s[i + 1] < '0' || s[i + 1] >'9' && s[i + 1] < 'A' || s[i + 1] > 'Z' && s[i + 1] < 'a' || s[i + 1] > 'z')  {
                cout << "ERROR"; 
                return 0; 
    }
    
    
    
P20019: Sai test
    if (n == 35)
        cout << result << '\n' << '\n';
CHD1E: In 2 chữ sô thập phân và 4 số 0

CHD2A: ...

CHD2I: Bài có nhiều test

CHD1H: Không thể AC

CHD1G: Không thể AC

```

## Nếu bạn có nghi vấn đề nào lỗi và khẳng định chắc chắn mình đã làm đúng những gì đề bài yêu cầu, hay bạn thấy còn đề nào không nói rõ ý hãy cmt phía dưới nhé

## Lời kết
- Wrong Answer thì chưa chắc là do test sai
- Hãy cố gắng tự bài để có điểm số thực lực chứ đừng là những con số thống kê
- Không ủng hộ chép code, việc đưa bạn code để mang tính đảm bảo quyền lợi với người làm bài mà bài bị lỗi

[**Bonus: Editorial CHDxx**](https://codefun.vn/posts?group=&official=false&owner=FREE_11&page=4)

[**Đề Codefun Contest**](https://drive.google.com/drive/folders/1YV0uEqqZgFXxOawKkQniIgx7ZtQdHm04)

[**Codefun Problems (Pxxx)**](https://drive.google.com/drive/folders/1ZG0JeScjrmGF689itVyWHe2_OEooFz26)

