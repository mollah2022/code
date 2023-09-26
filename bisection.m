f = @(x)2^x-5*x+2;
a = 0;
b = 1;
n = 30;
if f(a)*f(b) <0
  for i=1:n
    c = (a+b)/2;
    fprintf("p %d = %.4f\n",i,c)
    if f(a)*f(b) < 0
      b = c;
    else if f(b)*f(c) < 0
      a = c;

    end
  end
else
  disp('no root found');
  end

