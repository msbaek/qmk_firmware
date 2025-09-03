# promt for qmk keymap setting

다양한 조합키를 사용할 경우 internal keyboard와 iris keyboard가 다르게 동작하는
경우들이 있어.

다음과 같은 경우에서 internal keybaord의 동작과 iris keyboard의 동작을 동일하게
하려면 설정을 어떻게 변경해야 하는지 알려줘

keyboards/keebio/iris/keymaps/via/ 폴더에 설정 파일들이 존재해

## opt cmd alpha-numeric

### internal keyboard

down {"key_code":"left_command"}
flags left_command

down {"key_code":"left_command"}
flags left_command

down {"key_code":"left_option"}
flags left_command, left_option

down {"key_code":"left_option"}
flags left_command,left_option

down "key_code":"k"}
lags left_command,left_option

down {"key_code":"k"}
flags left_command, left_option

### iris keyboard

down {"key_code":"left_command"}
flags left_command

down {"key_code":"left_command"}
flags left_command

down {"key_code":"left_option"}
flags left_command, left_option

down ("key_code": "left_option"}
flags left_command,left_option

down ("key_code":"k"}
flags left_command.left option

down {"key_code":"k"}
flags left_command,left_option

## opt cmd up/down arrow

### internal keyboard

down {"key_code":"left_option"}
flags left_option

down {"key_code":"left_command"}
flags left_command,left_option

down {"key_code": "up_arrow"}
flags left_command, left_option

### iris keyboard

down {"key_code":"left_command"}
flags left_command

down {"key_code":"left_command"}
flags left_command

down {"key_code":"left_option"}
flags left_command, left_option

down {"key_code":"left_option"}
flags left_command, left_option

up {"key_code":"left_command"}
flags left_option

up {"key_code":"left_command"}
flags left_option

down {"key_code":"down_arrow"}
flags left_option

down {"key_code":"down_arrow"}
flags left_option

## opt shift tab

### internal keyboard

down {"key_code":"left_shift"}
flags left_shift

down {"key_code":"left_option"}
flags left_option,left_shift

down {"key_code":"tab"}
flags left_option,left_shift

### iris keyboard

down {"key_code":"left_shift"}
flags left_shift

down {"key_code":"left_option"}
flags left_option,left_shift

down {"key_code":"tab"}
flags left_option,left_shift

## opt shift alpha numeric

down "key_code": "left_option"}
flags left_option

down {"key_code": "left_shift"}
flags left_option, left_shift

down ("key_code":"a"}
flags left_option,left_shift

### internal keyboard

down {"key_code": "left_option"}
flags left_option

down {"key_code": "left_shift"}
flags left_option,left_shift

down {"key_code":"a")
flags left_option,left_shift

### iris keyboard

## cmd tab 후에 cmd 누른채로 left/right arrow

### internal keyboard

down {"key_code":"left_command")
flags left_command

down {"key_code":"tab")
flags left_command

up {"key_code":"tab")
flags left_command

down {"key_code":"right_arrow")
flas left command

### iris keyboard

down {"key_code":"left_command"}
flags left_command

down {"key_code":"tab'"}
flags left_command

up {"key_code":"tab")
flags left_command

down ("key_code":"right_arrow")
flags left_command

## cmd + click

### internal keyboard

down ("key_code":"left_command"}
flags left_command

up {"key_code":"left_command"}

### iris keyboard

down {"key_code". "left_command")
flags left_command

up ("key \_code"."left_command"y

down {"key_code": "return_or_enter")

up {"key_code": "return_or_enter"}
