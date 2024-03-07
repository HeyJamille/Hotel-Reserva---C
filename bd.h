#include <stdio.h>
#include <stdlib.h>
#include <postgresql/libpq-fe.h>

int main() {
    PGconn *conn;
    PGresult *res;

    conn = PQconnectdb("host=localhost dbname=meu_banco_de_dados user=meu_usuario password=minha_senha");

    if (PQstatus(conn) == CONNECTION_BAD) {
        fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        exit(1);
    }

    res = PQexec(conn, "SELECT * FROM minha_tabela");

    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        fprintf(stderr, "Erro na consulta: %s\n", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }

    int rows = PQntuples(res);
    int cols = PQnfields(res);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%s\t", PQgetvalue(res, i, j));
        }
        printf("\n");
    }

    PQclear(res);
    PQfinish(conn);

    return 0;
}
