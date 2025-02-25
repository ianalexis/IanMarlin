;AFTER_LAYER_CHANGE

;TestInicialHZ de 15 a 45
;M593 F{(layer_num < 2 ? 0 : 15 + 30.0 * (layer_num - 2) / (total_layer_count-3))} ; Hz Input Shaping Test

;Test de microajuste segun resultado (Ej 36 a 41)
;M593 F{(layer_num < 2 ? 0 : 36 + 5.0 * (layer_num - 2) / (total_layer_count-3))} ; Hz Input Shaping Test

;Test de dumping con resultado de microajuste
;M593 X F37
;M593 Y F37
;M593 D{(layer_num < 2 ? 0 : 0 + 0.5 * (layer_num - 2) / (total_layer_count-3))} ; Damping Test

;{layer_z}