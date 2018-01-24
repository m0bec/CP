program main
    integer :: x, a, b
    read *, x, a, b
    if (abs(x-a) < abs(x-b)) then
        print *, "A"
    else
        print *, "B"
    end if
end program main