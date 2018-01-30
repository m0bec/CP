program main
    integer :: n, get_a, ans = 0
    integer :: a(100000) = 0
    integer :: sort_a(100000) = 0
    integer :: now_num = 0, counter = 1, ad = 1
    interface 
        recursive function quick(a) result(r)
        integer, intent(in) :: a(:)
        integer, allocatable :: r(:)
        end function
    end interface ! 
    

    read *, n
    do i=1,n
        read *, a(i)
    end do

    sort_a = quick(a)
    
    do i=1,n
        if(now_num == sort_a(i)) then
            ad = ad * (-1)
        else
            now_num = sort_a(i)
            ad = 1
        end if
        ans = ans + ad
    end do

    print *, ans 


end program main

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