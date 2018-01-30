program main
    integer :: l(1000), r(1000) 
    integer :: n
    integer :: ans = 0

    read *, n
    do i=1,n
        read *, l(i), r(i)
        ans = ans + (r(i) - l(i)) + 1
    end do
    print *, ans
end program main