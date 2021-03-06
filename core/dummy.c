#include <assert.h>
#include "nb_c_utils.h"

__thread struct random_data my_random_data;
__thread bool my_random_state_initialized;
__thread double my_random_state;

void nb_def_ (common_t ** com) { assert(0); }
void nb_def_task_e_ (common_t ** com, const char *a, int b) { assert(0); }
void nb_def_node1_e_ (common_t ** com, const int *a) { assert(0); }
void nb_def_node2_e_ (common_t ** com, const int *a) { assert(0); }
void nb_def_node3_e_ (common_t ** com, const int *a) { assert(0); }
void nb_def_debug_ (common_t ** com, const int *a) { assert(0); }
void nb_def_learndiag_e_ (common_t ** com, const int *a) { assert(0); }

void nb_def_reg_e_ (common_t ** com, const char *a, int b) { assert(0); }
void nb_def_pre_e_ (common_t ** com, const int *a) { assert(0); }
void nb_def_initialprune_e_ (common_t ** com, const int *a) { assert(0); }
void nb_def_loss_e_ (common_t ** com, const char *a, int b) { assert(0); }
void nb_def_shape_e_ (common_t ** com, const char *a, int b) { assert(0); }
void nb_def_method_e_ (common_t ** com, const char *a, int b) { assert(0); }
void nb_def_mom_e_ (common_t ** com, const float *a) { assert(0); }
void nb_def_epoch_ (common_t ** com, const int *a) { assert(0); }
void nb_def_rtrain_ (common_t ** com, const float *a) { assert(0); }
void nb_def_iter_ (common_t ** com, const int *a) { assert(0); }
void nb_def_maxlearn_ (common_t ** com, const float *a) { assert(0); }
void nb_def_speed_ (common_t ** com, const float *a) { assert(0); }
void nb_def_relimportance_ (common_t ** com, const float *a) { assert(0); }
void nb_def_surro_ (common_t ** com, const float *a) { assert(0); }
void nb_def_prunemin_ (common_t ** com, const float *a) { assert(0); }
void nb_def_prunemax_ (common_t ** com, const float *a) { assert(0); }
void nb_def_pruneresult_ (common_t ** com, const float *a) { assert(0); }
void nb_def_losswgt_ (common_t ** com, const float *a) { assert(0); }
void nb_def_tdelta_ (common_t ** com, const float *a) { assert(0); }
void nb_tabdef1_e_ (common_t ** com, float *a, float *b, int *c, float *d, int *e,
        int *f, double *g) { assert(0); }
void nb_def_weight_mode_ (common_t ** com, const int *a) { assert(0); }
void nb_def_splot_mode_ (common_t ** com, const int *a) { assert(0); }
void nb_def_weight_factor_ (common_t ** com, const double *a) { assert(0); }
void nb_def_preproflag_ (common_t ** com, const int *node, const int *flag) { assert(0); }
void nb_def_prepropar_ (common_t ** com, const int *node, const int *par,
      const float *value) { assert(0); }

void nb_ranvin_ (common_t ** com, int *jseed, int *jwarm) { assert(0); }

void nb_prepro_and_network_e_ (common_t ** com, const int *a, float *b,
       float *c) { assert(0); }

void nb_saveexpertise_ (common_t ** com, const char *a, float *b, int c) { assert(0); }
void nb_saveascarray_ (common_t ** com, const char *a, float *b, int c) { assert(0); }

//fill correl_signi arrays
void nb_infoout_e_ (common_t ** com, float *weightsum, float *total,
        int *keep, int *rank, float *single, float *added,
        float *global, float *loss, int *nvar, int *index) { assert(0); }

double nb_f3_e_ (common_t ** com, float *a) { assert(0); }
void nb_wrap_f3_e_ (common_t ** com, float *a, double *result) { assert(0); }
void nb_wrap_invqincl_ (common_t ** com, float *a, float *tabxs,
      int *nllevel, float *tdeltaval, float *tdeltafrac,
      float *result) { assert(0); }
void nb_wrap_rndincl_e_ (common_t ** com, float *a, int *debug, float *tabxs,
       int *nllevel, float *tdeltaval, float *tdeltafrac,
       float *result) { assert(0); }
void nb_invquant2_ (common_t ** com, float *t, float *tabg, float *tabxs,
        float *result) { assert(0); }
void nb_wrap_quantile_ (common_t ** com, float *a, float *tabg, float *tabxs,
      int *nllevel, float *tdeltaval, double *netout,
      int *dbg, float *result) { assert(0); }
void nb_wrap_tmean_e_ (common_t ** com, float *TABG, float *TABXS, float *TRIM,
     int *nllevel, float *tdeltaval, double *netout,
     int *dbg, float *result) { assert(0); }
void nb_wrap_eval_bspline_e_ (common_t ** com, float *x, int *k, float *t,
      int *nkn, float *c, float *der, float *der2,
      float *der3, float *result) { assert(0); }
void nb_wrap_transgle_ (common_t ** com, float *a, float *b, float *result) { assert(0); }
void nb_wrap_rndm2_ (common_t ** com, int *a, int *dbg, float *result) { assert(0); }

void nb_wrap_conddensity_ (common_t ** com, float *a, int *dbg, float *tabxs,
         float *tabd, float *TT, int *NKNOT, float *CP,
         int *nllevel, float *tdeltaval,
         float *tdeltafrac, double *netout,
         float *result) { assert(0); }

void nb_defpolynomials_e_ (common_t ** com, int *a, float *b, int *c, int *d,
         float *e, float *f, float *g) { assert(0); }

void nb_defexpertise_e_ (common_t ** com, int *NLAYER, int *NODES, int *ITER,
       int *IPRUNE, float *W, float *TABX, float *ITABY,
       float *AE, float *DIAG, float *CHEBY, float *THETA,
       float *EXPERTISE, int *NumPreproVar, int *PreProc,
       int *AutoVarSelect, int *ISigSort, float *SigFrac,
       int *PreproFlag, float *PreproPar, int *Debug,
       float *RsfTable, int *nMapKey, float *MapKeyValue,
       float *MapKeyTrans, float *TABX2, float *RsfTable2,
       int *nlevel, int *node1, int *lshape, int *llog,
       int *ifixorder, int *ifixshape, int *nvar,
       int *n_marg_dim, int *marg_varid,
       float *marg_coeff, float *marg_coeff0,
       int *nllevel, float *tdeltaval, float *tdeltafrac,
       float *TABX3, float *RsfTable3, float *a_boost,
       float *inv_sigma_boostvar, float *diag_boost,
       float *mean_boostvar, int *ipos_add_vars) { assert(0); }

void nb_defft_e_ (common_t ** com, float *a, float *b, float *c, float *d, int *e,
      float *TT, int *NKNOT, float *CP, int *iversiont) { assert(0); }
void nb_prepro2_e_ (common_t ** com, float *IN, int *NEVTS1, int *NVARM1,
        float *TABX, float *ITABY, int *MXNODE, float *SCRATCH,
        double *CTH, double *STH, float *A, float *DIAG,
        float *CHEBY, float *THETA, int *IFIXORDER,
        int *PREPROC, int *Node1, int *LSHAPE, int *NEWEX,
        int *ISigSort, int *IPRUNE, int *NumPreproVar,
        int *PreproFlag, float *PreproPar, int *Debug,
        float *RsfTable, int *nmapkey, float *mapkeyvalue,
        float *mapkeytrans, int *doHisto, float *OUTLEVEL,
        float *T, float *TABX2, float *RsfTable2,
        int *IFixShape, int *NLEVEL, int *nllevel,
        float *tdeltaval, float *tdeltafrac,
        bool * is_preboost) { assert(0); }


void nb_chouth_ (common_t ** com, int *a, float *b, float *c, float *d, float *e,
     int *f, float *g, int *h, int *dbg) { assert(0); }
void nb_choutc_ (common_t ** com, float *a, float *b, float *c,
     int *d, float *e, int *f, int *nllevel, float *tdeltafrac) { assert(0); }
void nb_forwe_e_ (common_t ** com, int *a, float *b,
      double (*f) (common_t ** com, float *c), float *d, int *r,
      int *g) { assert(0); }
void nb_splinef2_e_ (common_t ** com, int *a, double *b, float *c, float *d, int *e,
         int *f, float *g, int *h, int *i, int *j) { assert(0); }
void nb_splinef2_when_needed_e_ (common_t ** com, double *a, float *b, int *c,
         int *d, float *e, int *f, int *g, int *h,
         bool *i) { assert(0); }
void nb_perfplot2_ (common_t ** com, int *a, double *b, int *c, float *d, int *e) { assert(0); }
void nb_ftxdef_ (common_t ** com, float *a, float *b, float *c, float *d, int *e,
     int *nllevel, double *netout, int *dbg) { assert(0); }
void nb_transbacktail_ (common_t ** com, float *a, float *b, float *c, int *dbg) { assert(0); }
void nb_transback_ (common_t ** com, float *a, float *b, float *c,
        int *nlLevel, double *netout, int *dbg) { assert(0); }

void nb_converttocarray_e_ (common_t ** com, const char *ExName, int a) { assert(0); }

void nb_readexpertise_e_ (common_t ** com, const char *ExName, float *Ex, int a) { assert(0); }

void nb_derivative_ (common_t ** com, float *t, float *deri, float *TABXS,
         float *TT, int *NKNOT, float *CP, int *nllevel,
         float *tdeltaval, float *tdeltafrac) { assert(0); }
void nb_wrap_ftmean_ (common_t ** com, float *TABG, float *TABXS,
    double (*f) (float *), int *nllevel, float *tdeltaval,
    double *netout, int *dbg, float *result) { assert(0); }

void nb_wrap_tomarginal_e_ (common_t ** com, float *X, float *TABX,
          int *nMapKey, float *MapKeyValue,
          int *PreproFlag, float *PreproPar, int *Debug,
          int *n_marg_dim, int *marg_varid,
          float *marg_coeff, float *marg_coeff0,
          float *result) { assert(0); }

void nb_wrap_decomposepreproflag_ (common_t ** com, int *PreproFlag,
           int *PreproFlag1, int *PreproFlag10,
           int *PreproFlag100, int *Debug,
           int *result) { assert(0); }

void nb_prepare_boostdiag_ (bool * is_preboost, bool * is_boost,
          bool * is_net_plus_diag, int *ifixshape,
          int *preproc, int *iterations, int *ioffset,
          int *iversiont) { assert(0); }

void nb_prepro2_boost_e_ (common_t ** com, float *IN, int *inum, float *scratch,
        bool * is_boost, bool * is_preboost,
        int *NumPreproVar_save, int *NumPreproVar,
        int *preproc_save, int *preproc, int *NODE1,
        int *node1_save, int *IFIXSHAPE, int *nlevel,
        int *nllevel, float *outlevel,
        float *inv_sigma_boostvar, float *a_boost,
        float *diag_boost, int *NVar, int *nodes,
        float *mean_boostvar, int *ISigSort, int *nMapKey,
        float *MapKeyValue, int *ipos_add_vars,
        int *iversiont, int *final_diagfit) { assert(0); }

void nb_diag_boostnet_e_ (common_t ** com, float *IN, int *NEVTS1, float *A,
        int *ioffset, int *nlevel, int *nllevel,
        int *lshape, float *tabx3, float *rsftable3,
        int *PREPROC, int *preproc_save, bool * is_boost,
        int *node1, int *node1_save, int *NumPreproVar,
        int *NumPreproVar_save, int *ifixshape,
        int *debug, bool * is_preboost, double *NETOUT,
        int *NVar, int *nodes, int *iversiont,
        float *cshape, int *final_diagfit) { assert(0); }
void nb_regul_inputs_ (float *IN, int *NVar, int *inum) { assert(0); }
// Functions called from NeuroBayes libs

void nbbook1_ (int *a, const char *b, int *c, float *d, float *e, float *f, int g) { assert(0); }
void nbfill_e_ (common_t ** com, int *a, float *b, float *c, float *d) { assert(0); }

int nb_def_debugexpert_ (common_t ** com, const int *a) { assert(0); }

void nbpak_e_ (common_t ** com, int *a, float *b) { assert(0); }
void nb_histo_init_ () { assert(0); }
void nb_histo_save_ (const char *a, int b) { assert(0); }

int nb_check_netout_ (double *netout, int *nlevel) { assert(0); }
void nb_interpolate_tabg_ (double *netout, int *nlevel, float *tabg) { assert(0); }
void nb_c_log(char* msg, int debug_lvl, common_t** com) { assert(0); }
int nb_get_debug(common_t** com) { assert(0); }
void nb_set_error(common_t** com1, int input_error_code, char* msg) { assert(0); }
void nb_delete_common(common_t** com) { assert(0); }
  
common_t* nb_init_common(int debug_lvl, ec_t** ec1, rand_func_t rand_func, void *rand_enc, int is_teacher) { return NULL; }
void nb_register_logging(common_t** com, log_func_t log, void* enc, delete_enclosed_func_t delete_enclosed) { assert(0); }

void free_ec1 (ec_t * ec) { assert(0); }
