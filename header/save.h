/* Pour lire ou écrire les sauvegardes */

/** 
 * met toute les données de la matrice a 0 
*/
void init_mat(int mat[NB_LINES][NB_COLS]);

/**
 * Affiche la matrice du jeu
*/
void print_mat(int mat[NB_LINES][NB_COLS],int n,int m);

int get_score_from_save(FILE * save);
/**
 * Récupère les données du plateau de jeux et les met dans mat
*/
void get_game_matrice(FILE* save,int mat[NB_LINES][NB_COLS]);

/**
 * Renvoie les figures trouvé dans la save 
*/
game get_figures(FILE* save,game g);

/**
 * Charge la sauvegarde et renvoie les données de jeux
*/
game load_save(int slot);

/**
 * Enregistre les données de jeux
*/
void write_save(game g);