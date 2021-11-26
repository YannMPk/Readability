# Readability
Programme qui calcule le niveau scolaire approximatif nécessaire pour comprendre un texte

Selon Scholastic , « Charlotte's Web » d'EB White se situe entre un niveau de lecture de deuxième et de quatrième année, et « The Giver » de Lois Lowry se situe entre un niveau de lecture de huitième année et un niveau de lecture de douzième année. Qu'est-ce que cela signifie, cependant, pour un livre d'être à un « niveau de lecture de quatrième année » ?

Eh bien, dans de nombreux cas, un expert humain peut lire un livre et prendre une décision sur la note pour laquelle il pense que le livre est le plus approprié. Mais vous pouvez aussi imaginer un algorithme essayant de déterminer le niveau de lecture d'un texte.

Alors, quels types de traits sont caractéristiques des niveaux de lecture plus élevés ? Eh bien, les mots plus longs sont probablement en corrélation avec des niveaux de lecture plus élevés. De même, les phrases plus longues sont probablement en corrélation avec des niveaux de lecture plus élevés. Un certain nombre de « tests de lisibilité » ont été développés au fil des ans, pour donner un processus de formule pour calculer le niveau de lecture d'un texte.

L'indice de Coleman-Liau est l'un de ces tests de lisibilité. L'index Coleman-Liau d'un texte est conçu pour afficher le niveau scolaire (américain) nécessaire pour comprendre le texte. La formule est :

index = 0.0588 * L - 0.296 * S - 15.8
Ici, Lest le nombre moyen de lettres pour 100 mots dans le texte, et Sest le nombre moyen de phrases pour 100 mots dans le texte.

Écrivons un programme appelé readabilityqui prend un texte et détermine son niveau de lecture. Par exemple, si l'utilisateur tape une ligne du Dr Seuss :

$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
Le texte saisi par l'utilisateur comporte 65 lettres, 4 phrases et 14 mots. 65 lettres pour 14 mots est une moyenne d'environ 464,29 lettres pour 100 mots. Et 4 phrases pour 14 mots, c'est une moyenne d'environ 28,57 phrases pour 100 mots. Branché sur la formule Coleman-Liau, et arrondi au nombre entier le plus proche, nous obtenons une réponse de 3 : donc ce passage est à un niveau de lecture de troisième année.

Essayons un autre :

$ ./readability
Text: Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
Grade 5
Ce texte a 214 lettres, 4 phrases et 56 mots. Cela donne environ 382,14 lettres pour 100 mots et 7,14 phrases pour 100 mots. Branché sur la formule Coleman-Liau, nous obtenons un niveau de lecture de cinquième année.

À mesure que le nombre moyen de lettres et de mots par phrase augmente, l'indice Coleman-Liau donne au texte un niveau de lecture plus élevé. Si vous deviez prendre ce paragraphe, par exemple, qui contient des mots et des phrases plus longs que l'un ou l'autre des deux exemples précédents, la formule donnerait au texte un niveau de lecture de onzième année.

$ ./readability
Text: As the average number of letters and words per sentence increases, the Coleman-Liau index gives the text a higher reading level. If you were to take this paragraph, for instance, which has longer words and sentences than either of the prior two examples, the formula would give the text an eleventh grade reading level.
Grade 11
