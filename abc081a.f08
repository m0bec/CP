program main
    character(len=3) :: s
    integer :: ans = 0
    read *, s
    
    if(s(1:1) == '1') then
        ans = ans + 1
    end if
    if(s(2:2) == '1') then
        ans = ans + 1
    end if
    if(s(3:3) == '1') then
        ans = ans + 1
    end if
    
    print *, ans
end program main
