label empty_cans:
    $ quick_menu = False
    stop music fadeout 2
    #This is important for the chapter selection
    scene black
    with Dissolve(1.5)
    pause 1.0
    ##################
    show EmpCans_txt zorder 50
    with Dissolve(1.5)
    pause 3.0
    scene black
    with Dissolve(1.5)
    pause 2.0

    play music SunnyHome
    $ quick_menu = True
    scene bg streets_seaside with fade
    "Sigh... Takagi-san teased me a lot again today."
    "She didn’t even give me a chance to counter."
    "grr... Just you wait, Takagi-san! Tomorrow I’ll-"
    t "[n]!"
    n "Huh?"
    show tk bike with ds01
    n "Takagi-san?!"
    show tk b_speaking with ds01
    t "Huh? You’re alone today?"
    show tk bike with ds01
    n "Uh... yeah."
    "It’s not like I have friends walking home on the same path I'm walking."
    show tk b_speaking with ds01
    t "Then, let’s walk together."
    show tk bike with ds01
    n "Huh?! What do you mean…?"
    "No way! She lives around here too?"
    show tk b_speaking with ds01
    t "Is something wrong?"
    show tk bike with ds01
    n "Uh no… it’s nothing. But… you’re on your bike. Will it be okay?"
    show tk b_speaking with ds01
    t "I will push."
    hide tk b_speaking with ds01
    ############################################################################
    ## New scenes
    "Is this real...? I’m walking home with Takagi-san."
    "I’m walking home with a classmate, and it’s a girl! What if someone sees us??"
    "No, calm down. She’ll tease me if she sees me blushing."
    "I need to calm down, maybe a soda would calm me."
    "I found a soda vending machine nearby, and I bought a new soda that I've never seen before."
    "I opened it and took a sip, It tastes pretty good!"
    show tk b_speaking with ds01
    t "You know, there's a new drink that came out recently. Is it good?"
    show tk bike with ds01
    n "Hmm? why all of a sudden?"
    "Is she referring to my drink? I mean I've never seen this before, so she might be."
    "Though, this gives me a funny idea. Hehe…"
    n "Yeah it is. Do you want to take a sip?"
    show tk b_speaking with ds01
    t "Can I? Thanks."
    hide tk b_speaking with ds01
    "I lend the can of soda I am drinking to Takagi-san, and she's about to take a sip."
    "Hehe... now's my chance!"
    show tk crs1 with ds01
    n "Hey… Takagi-san, I don’t mean to interrupt but… isn’t this what they call an indirect kiss?"
    "How’s that, Takagi-san? embarrassing, isn’t it? Feel the embarrassment!!"
    hide tk crs1 with ds01
    "Takagi-san sips on the can of soda I am drinking on like it's nothing..."
    pause 1
    "what?? she didn't get embarrassed at all!"
    show tk b_smiling_open_mouth with ds01
    t "Here, Thanks again. It really is delicious."
    show tk b_smiling with ds01
    "..."
    hide tk b_smiling with ds01
    "I’m thirsty, but how can I drink the rest of this?"
    "On this can... it’s Takagi-san's-"
    show tk b_speaking with ds01
    t "You’re not gonna drink it?"
    show tk bike with ds01
    n "Huh? No way! I will drink it!"
    hide tk bike with ds01
    n "Of course I can do it."
    "Yeah, this is nothing. There’s nothing to be worried about."
    "If she can do it, I can do it as well!!"
    #na "I was about to take a sip but Takagi-san interrupted me."
    show tk b_speaking with ds01
    t "It will be an indirect kiss though."
    hide tk b_speaking with ds01
    "!!!"
    n "gah!"
    "The can of soda slipped in my hand and fell to the ground."
    "..."
    "There goes the rest of my can of soda..."
    show tk lol with ds01
    t "Ahahaha, what are you doing?"
    hide tk lol with ds01
    "Sigh... what a waste, where's the trash can?"
    "I saw one, but it's on the other side of the street."
    "Whatever."
    stop music fadeout 2
    "In my frustration I threw the can and it actually came right in the trash can."
    play music a1
    show tk pog with ds01
    t "Woah, That's pretty impressive [n]!"
    hide tk pog with ds01
    "Man, I just frustratedly threw it. I didn't expect to make it right in."
    "Let's try another one."
    pause 1
    "It came right in the trash can again!"
    show tk ts_1 with ds01
    t "You're good at throwing cans, [n]."
    show tk ts_2 with ds01
    "Wow! No kidding! Undoubtedly I'm really good at throwing cans!... I never knew I had such talent!"
    show tk ts_1 with ds01
    t "Alright, now I want to try."
    hide tk ts_1 with ds01
    "..."
    "Takagi-san picked a can of soda and threw it, but missed it..."
    #show tk pout with ds01
    show tk poker_face with ds01
    t "Aw, I missed."
    n "Fufu... hahaha! What's with that weak throw? You aren't even close, Takagi-san!"
    show tk smug with ds01
    t "Hm, then let's have a match then?"
    n "Ahaha, a match? I really don't mind. I won't lose, anyway."
    show tk smug_o with ds01
    t "Then, each of us will throw one at a time. The first person to make it wins."
    show tk smug with ds01
    n "Fine by me."
    "To challenge me to a match she can't win. Takagi-san has lost her cool today. Such a great feeling I'm having right now!"
    "Fufufu..."
    n "If you win, you can ask me to do anything."
    show tk very_smug with ds01
    t "Hmmm...?"
    show tk very_smugo with ds01
    t "Anything?"
    t "Are you sure? You better not take it back."
    show tk very_smug with ds01
    n "It's not like I will lose anyway. You heard me loud and clear."
    ## TODO 141 instead of showing takagi make this a cutscene featuring takagi's can flying
    t "Then, here I throw!"
    hide tk very_smug with ds01
    "..."
    "Takagi-san threw a can... and it actually came right in the trash can."
    n "...WHA-?!"
    show tk lol with ds01
    t "Ahahaha, you don't think I could miss it in such small range, do you?"
    hide tk lol with ds01
    "Grr..."
    show tk ts_1 with ds01
    t "If you miss this one, you lose."
    show tk ts_2 with ds01
    "Damn you Takagi-san! You tricked me into it. now I really have to win this."
    hide tk ts_2 with ds01
    "I stood in the same position, the same angle as I threw the cans before."
    "Since the can is light, I'll just have to throw it normally."
    "Now what I have to do is focus and relax, so this can will come right in the trash can."
    "Watch me do it again! Takag-"
    show tk leaning with ds02
    t "Oh, by the way, if you make it..."
    "...?"
    t "I'll give you my first kiss."
    "..."
    hide tk leaning with ds01
    "WHA-?!"
    "Because of what Takagi-san said to me, I lost my focus and threw the can and missed my chance."
    "NO!!! I MISSED IT!"
    show tk lol with ds01
    t "Ahaha, guess it's my win then."
    hide tk lol with ds01
    "Grr... Damn you Takagi-san! such a cheap provocation you used!"
    n "That wasn't fair at all, Takagi-san..."
    show tk very_smugo with ds01
    t "Hmmm..., what wasn't fair?"
    show tk very_smug with ds01
    n "When I was about to throw it, you..."
    show tk very_smugo with ds01
    t "I did what?"
    show tk very_smug with ds01
    n "Nevermind!"
    hide tk very_smug with ds01
    "ugh... stop giving me that smug Takagi-san!"
    "It's too embarrassing to say it out loud!!"
    show tk b_speaking with ds01
    t"Let's get going, [n]."
    show tk bike with ds01
    n "Huh?... Okay."
    hide tk bike with ds01
    stop music fadeout 2
    ############################################################################
    ## new scenes
    scene bg streets_day with Dissolve(1.2)
    play music a2
    pause 0.5
    "Sigh... I lost to Takagi-san again..."
    "She just beat me up mercilessly."
    show tk b_smiling_open_mouth with ds01
    t "Though... that was fun, wasn't it?"
    show tk b_speaking with ds01
    t "It's the first time I walk home with you, [n]. Do you live around here?"
    show tk bike with ds01
    n "Huh? I mean... yeah, I'm almost near to my house by the way."
    hide tk bike with ds01
    "Wait, why is she saying this? Maybe... she's-"
    "No no no no, it can't be! This must be one of her pranks again!"

    menu:
        "She must be enjoying seeing me squirming with her teasing. But... how can I get out of this embarrassing situation??"

        "Change topic to punishment":
            $ answer = "Empc_Punishment"

        "Confess what you feel.":
            $ answer = "Empc_Confess"

        "Try to hide the embarrassment.":
            $ answer = "Empc_Embarrassment"

################################################################################
## punishment
    if answer == "Empc_Punishment":
        n "So...have you thought of a punishment yet?"
        show tk crs1 with ds01
        t "Eh? You mean your promise?..."
        show tk very_smug with ds01
        t "I thought you would ignore it right away."
        n "I DIDN'T!"
        n "I mean, punishment is a pain but... it's about my pride too."
        n "So please, don't toy with me! I will be ashamed for my life if you ignore it."
        hide tk very_smug with ds01
        #//////////////[Bad ending effect]//////////////
        "Wait... am I going too far? I just want to change the topic, that's all."
        n "W-Wait, Takagi-san, I just want to..."
        show tk smug_o with ds01
        t "Then that even makes me not want to give you any."
        show tk smug_o with ds01
        n "EEHH?!!"
        show tk lol with ds01
        t "Just kidding. But I honestly can't think of any."
        hide tk lol with ds01
        n "You can't be serious..."
        "That made me disappointed somehow..."
        "A few minutes of awkward silence between us passed and it seems Takagi-san will part away here."
        show tk b_speaking with ds01
        t "Well then, I'm going home first."
        hide tk b_speaking with ds01
        n "Ah... uhm."
        "..."
        "Somehow I feel bad for yelling at her like that. I didn't mean it in a bad way or anything."
        "Maybe I should apologize to her someday."
        python:
                persistent.ep2_progress = True
                renpy.save_persistent()
        $ renpy.end_replay()
        jump end_game
    if answer == "Empc_Confess":
        #//////////////[Good ending effect]//////////////
        "..."
        "Now that i've thought about it."
        "That was the first time someone played a game with me while walking home."
        show tk b_smiling with ds01
        "Just look at her smiling face! I bet she's enjoying seeing me losing."
        "Although... her smile looks kinda... c-cute?"
        hide tk b_smiling with ds01
        "It's the first time I'm feeling like this... Wh-why I-I can't resist expressing myself?"
        "..."
        n "Y-yeah."
        show tk bike with ds01
        t "?"
        n "Yeah, It's my first time walking with you too, and about the game, That was an annoying attempt but..."
        n "I did enjoy our game."
        n "I mean... I would be more satisfied if I won! It's not like I have any weird thoughts or anything!"
        hide tk bike with ds01
        "What am i saying??"
        "What's coming out from my mouth???"
        show tk b_smiling_open_mouth with ds01
        t "Thanks. It makes me happy when you say so."
        hide tk b_smiling_open_mouth with ds01
        "..."
        "What? no way! D-Does this actually lead to...?"
        "Is she actually ha-"
        show tk very_smugo with ds01
        t "Because now I can tease you without holding back. Seeing you enjoy my trick this much-"
        show tk very_smug with ds01
        n "WAIT WHA?! Hold up! I didn't mean it like that!!! The thing I hate about you is teasing me, y'know!"
        show tk lol with ds01
        t "Ahahaha, your reactions are hilarious! Ahaha."
        hide tk lol with ds01
        "Damn you, Takagi-san!!!"
        show tk ts_4 with ds01
        t "But I really meant it from the bottom of my heart. It was really a fun walk, [n]. Thank you."
        show tk ts_3 with ds01
        "!!!"
        n "You really think so? Or.. you're just teasing me again!"
        t "Hmmmm... sometimes I can while away, when I can't find a way to tease you."
        n "Uh...thanks? I guess?"
        hide tk ts_3 with ds01
        "After that, I reached the area near my house, I bid Takagi-san Farewell, and headed home."
        #"What a day it is!"
        python:
                persistent.ep2_progress = True
                renpy.save_persistent()
        $ renpy.end_replay()
#######################################
###### Testing the gift chapter #######
#######################################
        #jump bday_gift
        jump end_game

    if answer == "Empc_Embarrassment":
        #//////////////[Neutral ending effect]//////////////
        "Grrr..."
        "Damn you, Takagi-san!! You picked the worst time to say that!!"
        show tk very_smugo with ds01
        t "Hmmmm... your face is red."
        show tk very_smug with ds01
        n "No it's not!!! We... have been outside for an hour, that's why."
        show tk very_smugo with ds01
        t "You're sure you're not lying? Or... maybe you are just embarrassed?"
        show tk very_smug with ds01
        n "Not really. I just don't really know what to say."
        show tk very_smugo with ds01
        t "Ah, so you agree with me, don't you."
        show tk very_smug with ds01
        n "That's not what I meant... I mean..."
        show tk lol with ds01
        t "Ahahaha, your reactions are hilarious!"
        hide tk lol with ds01
        "I turned my head away from her, to hide my embarrassment."

        "I wonder though... if she remembers the punishment."
        show tk very_smugo with ds01
        t "Oh right, about your punishment..."
        show tk very_smug with ds01
        "I knew it."
        "Here it comes. I better be prepared for the worst..."
        "I have to be calm... but... this is a punishment from Takagi-san - the person who always teases me!!!"
        "Somehow... this feels scary."
        show tk ts_1 with ds01
        t "Hmmm... I honestly can't think of a punishment for you..."
        show tk ts_2 with ds01
        n "Eh? What do you...?"
        show tk ts_4 with ds01
        t "I mean, I don't mind if you don't do anything."
        hide tk ts_4 with ds01
        "..."
        n "Wait a sec, Takagi-san! If you do that, I'll feel like I will never win against you."
        show tk ts_4 with ds01
        t "It doesn't matter. You can't win against me anyway."
        show tk ts_3 with ds01
        n "EHHH?! What do you mean by that?"
        n "And that's kinda mean!!"
        show tk lol with ds01
        t "Ahahaha!"
        hide tk lol with ds01
        "After that, I reached the area near my house, I bid Takagi-san Farewell, and headed home."
        python:
                persistent.ep2_progress = True
                renpy.save_persistent()

        jump end_game
