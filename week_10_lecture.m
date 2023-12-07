%slovo='aaaaaaaaaa'
%fprintf('aaa = %s', slovo);
% 
% orig_balance = input('Input your bank balance: \n');
% disp('Your balance is ');
% disp(orig_balance);
% 
% if orig_balance < 5000
%     rate = 0.09;
% else
%     rate = 0.10;
% end
% 
% new_balance = orig_balance + rate * orig_balance;
% disp('Your balance after interest is: ');
% disp(new_balance);
% 
% tic;
% summ = 0;
% counter = 1;
% 
% while counter <= 10000000000
%     summ = summ + counter;
%     counter = counter + 1;
% end
% 
% disp(summ);
% toc;
% 
% number = floor(rand * 10 + 1);
% 
% guess = -1;
% count = 1;
% 
% while guess ~= number
%     guess = input('Enter a guess: ');
%     count = count + 1;
%     if guess < number
%         disp('too small');
%     elseif guess > number
%         disp('too big');
%     end
% end
% 
% fprintf('INCOMPREHENSIBLY LOUD CORRECT BUZZER SOUND; took you %d guesses\n', count);




