-- postgres
-- for development only
-- in production this should be created manually with a secure password
CREATE DATABASE bringo_dev;
CREATE USER bringo WITH PASSWORD 'bringo1';
GRANT ALL PRIVILEGES ON DATABASE bringo_dev to bringo;
