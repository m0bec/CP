program main
    integer :: A,B,C,D,E,F, asn1, ans2, ac=0, bc = 0, nw = 0, max_num, cc=0, dc=0, sg, agres, k=1
    logical :: flag = .true.
    integer :: water(1000) = 0

    read *, A,B,C,D,E,F
    do i = 0,1000
        do j = 0,1000
            if(A*i+B*j <= F/100) then
                water(k) = A*i+B*j
                k = k + 1
            else
                exit
            end if
        end do
    end do

    max_num = k-1
    ans1 = A*100
    ans2 = 0

    do i=2,max_num
        do j=0,(F/100)*E/C
            do l=0,E*F/100/D
                if(real(C*j+D*l) <= E*water(i) .and. water(i)*100 + C*j+D*l <= F) then
                    sg = C*j+D*l
                else
                    exit
                end if
            end do
            if(real(ans2)/real(ans1) < real(sg)/real(water(i)*100+sg)) then
                ans1 = water(i)*100 + sg
                ans2 = sg
            end if
        end do
    end do
    print *, int(ans1), ans2
end program main