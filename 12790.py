for i in range(int(input())):
    hp, mp, dam, shd, hp_dis, mp_dis, dam_dis, shd_dis = map(int, input().split())

    hp += hp_dis
    if hp < 1: hp = 1
    mp += mp_dis
    if mp < 1: mp = 1
    dam += dam_dis
    if dam < 0: dam = 0
    shd += shd_dis

    print(hp + 5 * mp + 2 * dam + 2 * shd)
