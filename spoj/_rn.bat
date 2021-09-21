//change all filenames to lowercase
for /F %%a in ('dir /L /B') do rename %%a %%a
