USE AtividadeDDL_DML;

CREATE TABLE Ramo_Atividade(
	cd_ramo INT PRIMARY KEY NOT NULL,
	ds_ramo VARCHAR(100) NOT NULL
);

CREATE TABLE Tipo_Assinante(
	cd_tipo INT PRIMARY KEY NOT NULL,
	ds_tipo VARCHAR(100) NOT NULL
);

CREATE TABLE Assinante(
	cd_assinante INT PRIMARY KEY NOT NULL,
	nm_assinante VARCHAR(80) NOT NULL
);

CREATE TABLE Assinatura(
	cd_assinatura INT PRIMARY KEY NOT NULL,
	fk_cd_assinante INT NOT NULL,
	fk_cd_ramo INT NOT NULL,
	fk_cd_tipo INT NOT NULL,
	FOREIGN KEY (fk_cd_assinante) REFERENCES Assinante(cd_assinante),
	FOREIGN KEY (fk_cd_ramo) REFERENCES Ramo_Atividade(cd_ramo),
	FOREIGN KEY (fk_cd_tipo) REFERENCES Tipo_Assinante(cd_tipo)
);

CREATE TABLE Municipio(
	cd_municipio INT PRIMARY KEY NOT NULL,
	ds_municipio VARCHAR(70) NOT NULL
);

CREATE TABLE Endereco(
	cd_endereco INT PRIMARY KEY NOT NULL,
	fk_cd_assinante INT NOT NULL,
	ds_enderecoo VARCHAR(200) NOT NULL,
	complemento VARCHAR(100) NULL,
	bairro VARCHAR(80)NULL,
	cep VARCHAR(30)NOT NULL,
	fk_cd_municipio INT NOT NULL,
	FOREIGN KEY (fk_cd_assinante) REFERENCES Assinante(cd_assinante),
	FOREIGN KEY (fk_cd_municipio) REFERENCES Municipio(cd_municipio)
);

CREATE TABLE Telefone(
	cd_telefone INT PRIMARY KEY NOT NULL,
	ddd VARCHAR(3) NOT NULL,
	n_fone VARCHAR(20) NOT NULL
);

CREATE TABLE TelefoneEndereco(
	cd_tel_end INT PRIMARY KEY NOT NULL,
	fk_cd_tel INT NOT NULL,
	fk_cd_end INT NOT NULL,
	FOREIGN KEY (fk_cd_tel) REFERENCES Telefone(cd_telefone),
	FOREIGN KEY (fk_cd_end) REFERENCES Endereco(cd_endereco)
);

INSERT INTO Tipo_Assinante(cd_tipo, ds_tipo)
    VALUES 
        (1,'Prata'),
        (2, 'Ouro'),
        (3, 'Diamante');

INSERT INTO Ramo_Atividade(cd_ramo, ds_ramo)
    VALUES
        (1, 'Musica'),
        (2, 'Filme');

INSERT Assinante(cd_assinante, nm_assinante)
    VALUES
        (1, 'Bruce Wayne'),
        (2, 'Dick Grayson');

INSERT Assinatura(cd_assinatura, fk_cd_assinante, fk_cd_ramo, fk_cd_tipo)
    VALUES
        (1, 1, 2, 3),
        (2, 1, 1, 2);

INSERT Municipio(cd_municipio, ds_municipio)
    VALUES
        (1, 'Gotham City'),
        (2, 'Metropolis');

INSERT Endereco(cd_endereco, fk_cd_assinante, fk_cd_municipio, ds_enderecoo, bairro, cep)
    VALUES
        (1, 1, 1,'Waynes Enterprises, Inc.',  'Wayne Foundation', 78445),
        (2, 1, 1,'Batcave', 'Wayne Manor', 84557);

INSERT Telefone(cd_telefone, ddd, n_fone)
    VALUES
        (1, 43, 23152),
        (2, 43, 87563),
        (3, 32, 54863);

INSERT TelefoneEndereco(cd_tel_end, fk_cd_end, fk_cd_tel)
    VALUES
        (1, 1, 1),
        (2, 1, 2),
        (3, 1, 3);
