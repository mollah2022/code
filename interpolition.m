a = [1 15;1 20];
b = [362.78;517.35];
n = length(b);
for k = 1:n-1
  for i = k+1:n
    factor = a(i,k)/a(k,k);
    a(i,k:n)=a(i,k:n)-factor*a(k,k:n);
    b(i) = b(i)-factor*b(k);
  endfor
endfor
x = zeros(n,1);
for i = n:-1:1
  x(i)=(b(i)-a(i,i+1:n)*x(i+1:n))/a(i,i);
endfor
y = x(1)+x(2)*16;
disp(y)

