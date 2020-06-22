CREATE TABLE IF NOT EXISTS users (
  user_id serial PRIMARY KEY,
  password VARCHAR (255) NOT NULL,
  email VARCHAR (255) UNIQUE NOT NULL,
  created_on TIMESTAMP NOT NULL,
  last_login TIMESTAMP
);

CREATE INDEX users_email_password ON users (email, password);

INSERT INTO users (password, email, created_on)
VALUES ('$argon2i$v=19$m=65536,t=10,p=1$FgVrvOhkkEHtWRIc6W29gw$0P1W/kPR7/FWR0ti48F5SSHetUfqSaUaueOr92oUDuw', 'test@test.com', now());
