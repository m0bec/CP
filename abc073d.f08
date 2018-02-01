program main
    integer :: N,M,R,a,b,c
    integer :: rr(8)
    integer :: g(200,200)
    logical :: used(8)
    integer, parameter :: INF = 100000000
    integer :: ans
    common g, R, rr, ans
    ans = INF
    do i=1,200
        do j=1,200
            g(i,j) = INF
        end do
    end do
    do i=1,8
        used(i) = .false.
    end do

    read *, N,M,R

    read *, (rr(i), i=1,R)

    do i = 1,M
        read *, a, b, c
        g(a,b) = c
        g(b,a) = c
    end do

    do i = 1,N
        do j=1,N
            do k=1,N
                if(g(j,k) > g(j,i)+g(i,k) ) then
                    g(j,k) = g(j,i) + g(i,k)
                end if
            end do
        end do
    end do

    call dfs(0, 1, -1)

    print *, ans

contains
    recursive subroutine dfs(dist, c, now_pos)
        integer :: dist, c, now_pos
        integer :: R, ans
        integer :: rr(8)
        logical :: used(8)
        integer :: g(200,200)
        common g, R, rr, ans, used
        if(now_pos == R) then
            if(ans > dist) then
                ans = dist
            end if
        else
            do i=1,8
                if(used(i) .eqv. .false.) then
                    used(i) = .true.
                    if(now_pos == -1) then
                        call dfs(0, c, rr(i))
                    else
                        call dfs(dist + g(now_pos, rr(i)), c+1, rr(i))
                    end if
                    used(i) = .false.
                end if
            end do
        end if
    end subroutine dfs
end program main
