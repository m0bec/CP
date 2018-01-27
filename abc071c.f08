program main
    integer n
    integer :: a(10**5)
    integer, allocatable :: str_a(:)
    integer, allocatable :: ans(:)
    integer(8) :: first=0, second=0
    integer(8) :: answer
    integer restart
 
    read *, n
    read *, (a(i), i=1,n)
    str_a = a(1:n)
    ans = quick(str_a)
    
    do i=1,n-1
        if(ans(i)==ans(i+1)) then
            first = ans(i)
            restart = i+2
            exit
        end if
    end do
 
    if (result < n) then
        do i=restart,n-1
            if(ans(i)==ans(i+1)) then
                second = ans(i)
                exit
            end if
        end do
    end if
    
    answer = first * second
    print *, answer
 
contains
    recursive function quick(a) result(r)
        integer, intent(in) :: a(:)
        integer, allocatable :: r(:)
        integer :: p
        if(size(a) < 2) then
            r = a
        else
            p = a(1)
            r = [quick(pack(a(2:), a(2:) > p)), pack(a, a == p), quick(pack(a(2:), a(2:) < p))]
        end if
    end function quick
end program main