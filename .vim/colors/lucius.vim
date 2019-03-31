et background=dark
hi clear
if exists("syntax_on")
        syntax reset
    endif
    let colors_name="lucius"

"Some other colors to save
" blue: 3eb8e5
" green: 92d400
" c green: d5f876, cae682
" new blue: 002D62
" new gray: CCCCCC


" Base color
" ----------
hi Normal           guifg=#e0e0e0           guibg=#202020
hi Normal           ctermfg=253             ctermbg=235


" Comment Group
" -------------
" any comment
hi Comment          guifg=#606060
gui=none
hi Comment          ctermfg=248
cterm=none


" Constant Group
" --------------
" any constant
hi Constant         guifg=#8cd0d3
gui=none
hi Constant         ctermfg=116
cterm=none
" strings
hi String           guifg=#80c0d9
gui=none
hi String           ctermfg=110
cterm=none
" character constant
hi Character        guifg=#80c0d9
gui=none
hi Character        ctermfg=110
cterm=none
" numbers decimal/hex
hi Number           guifg=#8cd0d3
gui=none
hi Number           ctermfg=116
cterm=none
" true, false
hi Boolean          guifg=#8cd0d3
gui=none
hi Boolean          ctermfg=116
cterm=none
" float
hi Float            guifg=#8cd0d3
gui=none
hi Float            ctermfg=116
cterm=none


" Identifier Group
" ----------------
" any variable name
hi Identifier       guifg=#e6c080
gui=none
hi Identifier       ctermfg=216
cterm=none
" function, method, class
hi Function         guifg=#e6c080
gui=none
hi Function         ctermfg=216
cterm=none


" Statement Group
" ---------------
" any statement
hi Statement        guifg=#b3d38c
gui=none
hi Statement        ctermfg=150
cterm=none
" if, then, else
hi Conditional      guifg=#b3d38c
gui=none
hi Conditional      ctermfg=150
cterm=none
" try, catch, throw, raise
hi Exception        guifg=#b3d38c
gui=none
hi Exception        ctermfg=150
cterm=none
" for, while, do
hi Repeat           guifg=#b3d38c
gui=none
hi Repeat           ctermfg=150
cterm=none
" case, default
hi Label            guifg=#b3d38c
gui=none
hi Label            ctermfg=150
cterm=none
" sizeof, +, *
hi Operator         guifg=#b3d38c
gui=none
hi Operator         ctermfg=150
cterm=none
" any other keyword
hi Keyword          guifg=#b3d38c
gui=none
hi Keyword          ctermfg=150
cterm=none


" Preprocessor Group
" ------------------
" generic preprocessor
hi PreProc          guifg=#e9dfaf
gui=none
hi PreProc          ctermfg=223
cterm=none
" #include
hi Include          guifg=#e9dfaf
gui=none
hi Include          ctermfg=223
cterm=none
" #define
hi Define           guifg=#e9dfaf
gui=none
hi Define           ctermfg=223
cterm=none
" same as define
hi Macro            guifg=#e9dfaf
gui=none
hi Macro            ctermfg=223
cterm=none
" #if, #else, #endif
hi PreCondit        guifg=#e9dfaf
gui=none
hi PreCondit        ctermfg=223
cterm=none


" Type Group
" ----------
" int, long, char
hi Type             guifg=#93d6a9
gui=none
hi Type             ctermfg=115
cterm=none
" static, register, volative
hi StorageClass     guifg=#93d6a9
gui=none
hi StorageClass     ctermfg=115
cterm=none
" struct, union, enum
hi Structure        guifg=#93d6a9
gui=none
hi Structure        ctermfg=115
cterm=none
" typedef
hi Typedef          guifg=#93d6a9
gui=none
hi Typedef          ctermfg=115
cterm=none


" Special Group
" -------------
" any special symbol
hi Special          guifg=#cca3b3
gui=none
hi Special          ctermfg=181
cterm=none
" special character in a constant
hi SpecialChar      guifg=#cca3b3
gui=none
hi SpecialChar      ctermfg=181
cterm=none
" things you can CTRL-]
hi Tag              guifg=#cca3b3
gui=none
hi Tag              ctermfg=181
cterm=none
" character that needs attention
hi Delimiter        guifg=#cca3b3
gui=none
hi Delimiter        ctermfg=181
cterm=none
" special things inside a comment
hi SpecialComment   guifg=#cca3b3
gui=none
hi SpecialComment   ctermfg=181
cterm=none
" debugging statements
hi Debug            guifg=#cca3b3           guibg=NONE
gui=none
hi Debug            ctermfg=181             ctermbg=NONE
cterm=none


" Underlined Group
" ----------------
" text that stands out, html links
hi Underlined       guifg=fg
gui=underline
hi Underlined       ctermfg=fg
cterm=underline


" Ignore Group
" ------------
" left blank, hidden
hi Ignore           guifg=bg
hi Ignore           ctermfg=bg


" Error Group
" -----------
" any erroneous construct
hi Error            guifg=#e37170           guibg=#432323
gui=none
hi Error            ctermfg=167             ctermbg=52
cterm=none


" Todo Group
" ----------
" todo, fixme, note, xxx
hi Todo             guifg=#efef8f           guibg=NONE
gui=underline
hi Todo             ctermfg=228             ctermbg=NONE
cterm=underline


" Spelling
" --------
" word not recognized
hi SpellBad         guisp=#ee0000
gui=undercurl
hi SpellBad                                 ctermbg=9
cterm=undercurl
" word not capitalized
hi SpellCap         guisp=#eeee00
gui=undercurl
hi SpellCap                                 ctermbg=12
cterm=undercurl
" rare word
hi SpellRare        guisp=#ffa500
gui=undercurl
hi SpellRare                                ctermbg=13
cterm=undercurl
" wrong spelling for selected region
hi SpellLocal       guisp=#ffa500
gui=undercurl
hi SpellLocal                               ctermbg=14
cterm=undercurl


" Cursor
" ------
" character under the cursor
hi Cursor           guifg=bg                guibg=#a3e3ed
hi Cursor           ctermfg=bg              ctermbg=153
" like cursor, but used when in IME mode
hi CursorIM         guifg=bg                guibg=#96cdcd
hi CursorIM         ctermfg=bg              ctermbg=116
" cursor column
hi CursorColumn     guifg=NONE              guibg=#202438
gui=none
hi CursorColumn     ctermfg=NONE            ctermbg=236
cterm=none
" cursor line/row
hi CursorLine       gui=NONE                guibg=#202438
gui=none
hi CursorLine       cterm=NONE              ctermbg=236
cterm=none


" Misc
" ----
" directory names and other special names in listings
hi Directory        guifg=#c0e0b0
gui=none
hi Directory        ctermfg=151
cterm=none
" error messages on the command line
hi ErrorMsg         guifg=#ee0000           guibg=NONE
gui=none
hi ErrorMsg         ctermfg=196             ctermbg=NONE
cterm=none
" column separating vertically split windows
hi VertSplit        guifg=#777777           guibg=#363946
gui=none
hi VertSplit        ctermfg=242             ctermbg=237
cterm=none
" columns where signs are displayed (used in IDEs)
hi SignColumn       guifg=#9fafaf           guibg=#181818
gui=none
hi SignColumn       ctermfg=145             ctermbg=233
cterm=none
" line numbers
hi LineNr           guifg=#818698           guibg=#363946
hi LineNr           ctermfg=102             ctermbg=237
" match parenthesis, brackets
hi MatchParen       guifg=#00ff00           guibg=NONE
gui=bold
hi MatchParen       ctermfg=46              ctermbg=NONE
cterm=bold
" the 'more' prompt when output takes more than one line
hi MoreMsg          guifg=#2e8b57
gui=none
hi MoreMsg          ctermfg=29
cterm=none
" text showing what mode you are in
hi ModeMsg          guifg=#76d5f8           guibg=NONE
gui=none
hi ModeMsg          ctermfg=117             ctermbg=NONE
cterm=none
" the '~' and '@' and showbreak, '>' double wide char doesn't fit on
line
hi NonText          guifg=#404040
gui=none
cterm=none
" the hit-enter prompt (show more output) and yes/no
questions
hi Question         guifg=fg
cterm=none
" meta and special keys used with map, unprintable
characters
hi SpecialKey    , :autocmd, etc
hi Title            guifg=#62bdde
gui=none
hi Title            ctermfg=74
gui=none
" warning messages
hi WarningMsg       guifg=#e5786d
cterm=none
" current match in the wildmenu completion
hi WildMenu         guifg=#cae682
ctermbg=186             cterm=bold


" Diff
" ----
" added line
hi DiffAdd          guifg=#80a090
8             ctermbg=22             cterm=none
" changed line
hi DiffChange       guifg=NONE
guibgggggg            cterm=none
" leted line
hi DiffDelete       guifg=#6c6661
guibg=#3c3631           gui=none
hi DiffDelete       ctermfxt         guifg=#f05060
guibg=#4a343a           gui=bold
hi DiffText         ctermfg=203
ctermbg=52             cterm=bold


" Folds
" -----
" lin    gui=none
hi Folded           ctermfg=117
ctermbg=238             cterm=none
" column on sideeeeddddduibg=#363946
gui=none
hi FoldColumn       ctermfg=117
ctermbg=238             cterm=none

s///c
hi IncSearch        ifg=#66ffff
gui=reverse
hi IncSearch        ctermfg=
ttern), also used for quickfix
hi Search
guibg=#ffaa33          gui=none
hi Search                                    ------
" normal item in popuphi Pmenu
guifg=#e0e0e0           guibg=#303840
gui=none
hi Pmenu            ctermfg=253     uifg=#cae682
guibg#505860           gui=none
hi PmenuSel         ctermfg=186
ctermg=237       #505860           gui=nne
hi PMenuSbar                              =59
ctp
hi PMenuThumb
gug=#808890           gui=non
h PMenuThumb
ctermbg=102             cterm=none


" Status Line
"              0e0           gui=#363946
gui=bold
hi StatusLine       ctermfg=254
ctermbg=237             ctttttt      guibg=#363946
gui=none
hi StatusLineNC     ctermfg=244
ctermbg=237             cterm=none





abLine          guifg=#b6f98           guibg=#363946
gui=none
hi TabLine          cte=244             ctermbg=236
cccf           guibg=#363946           gui=none
hi TabLineFill      ctermfg=187
ctermbg=236             ctg=#efefef
guibg=#41465           gui=bold
hi TabLineSel       ctermfg=254
ctermbg=236             cterm=bold


"                               uibg=#364458
hi Visual           ctermfg=NONE
ctermbg=24
" visual mode selection when vim is not owning tt
gui=underline
hi isualNOS        ctermfg=fg
cterm=underline
