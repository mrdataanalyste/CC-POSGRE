-- Création de la table des tâches
CREATE TABLE tasks (
    task_id SERIAL PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    description TEXT,
    due_date DATE,
    status VARCHAR(20) DEFAULT 'En attente' CHECK (status IN ('En attente', 'En cours', 'Terminée')),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
