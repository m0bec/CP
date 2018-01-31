program main
    integer :: g(200,200)
    integer :: n,m,r,a,b,c
    integer(8) :: ans

    read *, n, m, r
    do i=1,m
        read *, a, b, c
        g(a,b) = c
        g(b,c) = c
    end do

    do i=1, n

end program main
