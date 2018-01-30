function add(a) result(k)
 IMPLICIT NONE
    integer :: a
    integer :: k
    k = a+1
end function add

program main
 IMPLICIT NONE
    integer :: b
    integer :: add
    b=0
    b = add(b)
    print *, b
end program