program main
    integer :: a,b, c
    read *, a
    read *, b
    if(a < b) then
        c = b
        b = a
        a = c
    end if
    if(abs(b-a) >= abs(10+b-a)) then
        print *, abs(10+b-a)
    else
        print *, abs(b-a)
    end if
end program main