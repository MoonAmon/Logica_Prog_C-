-- DDL (create table)

CREATE TABLE Cliente(
    cpf INTEGER PRIMARY KEY NOT NULL,
    nome VARCHAR(60) NOT NULL,
    dtNasc DATE NOT NULL
);

CREATE TABLE Modelo(
    codMod INTEGER PRIMARY KEY NOT NULL,
    Desc_2 VARCHAR(40)
);

CREATE TABLE Patio(
    num INTEGER PRIMARY KEY NOT NULL,
    ender VARCHAR(40) NOT NULL,
    capacidade INTEGER NOT NULL
);

CREATE TABLE Veiculo(
    placa VARCHAR(8) PRIMARY KEY NOT NULL,
    Modelo_codMod INTEGER NOT NULL,
    Cliente_cpf INTEGER NOT NULL UNIQUE,
    cor VARCHAR(20) NOT NULL

    FOREIGN KEY (Modelo_codMod) REFERENCES Modelo(codMod),
    FOREIGN KEY (Cliente_cpf) REFERENCES Cliente(cpf)
);

CREATE TABLE Estaciona(
    cod INTEGER PRIMARY KEY NOT NULL,
    Patio_num INTEGER NOT NULL,
    Veiculo_placa VARCHAR(8) NOT NULL UNIQUE,
    dtEntrada VARCHAR(10) NOT NULL,
    dtSaida VARCHAR(10) NULL,
    hsEntreda VARCHAR(10) NOT NULL,
    hsSaida VARCHAR(10) NULL

    FOREIGN KEY (Veiculo_placa) REFERENCES Veiculo(Placa),
    FOREIGN KEY (Patio_num) REFERENCES Patio(num)
);

--DML (insert - pelo menos 2 em cada tabela)

INSERT INTO Cliente(cpf, nome, dtNasc)
    VALUES
        (14523, 'Dominic Toretto', '08-29-1976'),
        (45763, 'Brian O´Conner', '07-14-1947');

INSERT INTO Modelo(codMod, Desc_2)
    VALUES
        (1, 'Dodge'),
        (2, 'Nissan');

INSERT INTO Patio(num, ender, capacidade)
    VALUES
        (10, '719 6th St,Los Angeles CA 90021 USA', 2000),
        (11, '500 Speedway Dr,Irwinddale CA 91706 USA', 1000);

INSERT INTO Veiculo(placa, Modelo_codMod, Cliente_cpf, cor)
    VALUES
        ('900 LYP', 1, 14523, 'Black'),
        ('4G2FAST', 2, 45763, 'Blue');

INSERT INTO Estaciona(cod, Patio_num, Veiculo_placa, dtEntrada, dtSaida, hsEntreda, hsSaida)
    VALUES
        (41, 10, '900 LYP', '02-02-2001', NULL, '02:32', NULL),
        (42, 10, '4G2FAST', '15-04-1999', '20-12-2000', '05:30', '12:55');
