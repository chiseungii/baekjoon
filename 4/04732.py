codes = ["A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"]

def afterMove(code, m):
    if code == "Ab": code = "G#"
    elif code == "Bb": code = "A#"
    elif code == "B#": code = "C"
    elif code == "Cb": code = "B"
    elif code == "Db": code = "C#"
    elif code == "Eb": code = "D#"
    elif code == "E#": code = "F"
    elif code == "Fb": code = "E"
    elif code == "Gb": code = "F#"

    index = codes.index(code)
    index += m
    if index < 0: index += 12
    else: index %= 12

    return codes[index]

while 1:
    musics = list(input().split())
    if musics[0] == "***": break
    move = int(input())

    for music in musics:
        print(afterMove(music, move), end=' ')
    print()
