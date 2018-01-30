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