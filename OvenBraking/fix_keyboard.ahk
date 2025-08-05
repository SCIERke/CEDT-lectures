toggle := false
CoordMode, Screen

; Calculate top-center position
ToolTipX := (A_ScreenWidth // 2) - 150
ToolTipY := 50

RAlt::
    toggle := !toggle
    if (toggle) {
        ShowCustomTip("Arrow Mode ON")
    } else {
        RemoveToolTip()
    }
return

#If (toggle)
p::Up
l::Left
`;::Down
'::Right
#If

ShowCustomTip(msg) {
    global ToolTipX, ToolTipY
    Gui, Tip:Destroy  ; Ensure no duplicate GUI
    Gui, Tip:+AlwaysOnTop -Caption +ToolWindow +LastFound
    Gui, Tip:Font, s20 Bold, Segoe UI
    Gui, Tip:Add, Text,, %msg%
    Gui, Tip:Show, x%ToolTipX% y%ToolTipY% NoActivate
}

RemoveToolTip() {
    Gui, Tip:Destroy
}
